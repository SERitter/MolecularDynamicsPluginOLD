// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "Atom.generated.h"

UCLASS()
class AAtom : public AActor
{
	GENERATED_BODY()
public:
	/**
	 * Default constructor.
	 */
	AAtom();

	/**
	 * Initializes an atom prototype object.  The prototype has position, velocity, etc set to zero.
	 * The AMBER 94 type lets us have atoms of the same element in different bond conditions, which will have different Van Der Waals parameters etc.
	 * @param NewName - Full English name of the atom
	 * @param NewSymbol - Atomic Symbol
	 * @param NewType - AMBER 94 type of atom
	 * @param NewColor - The colour to use for this atom.
	 * @param NewMass - Mass of the atom, in atomic mass units (or g/mol).
	 * @param NewCharge - Charge of the atom, in multiples of fundemental charges
	 * @param NewCovalentRadius - Covalent Radius of the atom, in Angstroms
	 * @param NewVanDerWaalsRadius - The AMBER94 van der Waals radius of the atom, in Angstroms
	 * @param NewVanDerWaalsMagnitude - The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol
	*/
	UFUNCTION()
		void InitAtomPrototype(
			FString NewName,
			FString NewSymbol,
			FString NewType,
			FLinearColor NewColor,
			float NewMass,
			int32 NewCharge,
			float NewCovalentRadius,
			float NewVanDerWaalsRadius,
			float NewVanDerWaalsMagnitude);

	/**
	 * Makes a new atom with the same properties as the source, at the new
	 * position.
	 * @param Source - The prototype to copy properties from.
	 * @param NewPosition - The position of the atom in the molecule, in angstroms.
	 */
	UFUNCTION()
		void InitAtomCopy(AAtom* Source, FVector NewPosition);

	/**
	 * Makes a new atom with the same properties as the source, at the same position.
	 * @param Source - The prototype to copy properties from.
	 */
	UFUNCTION()
		void InitAtomExactCopy(AAtom* Source);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	 * @return The name of this atom (in English, e.g. "Oxygen").
	 */
	UFUNCTION()
		FString GetName();

	/**
	 * @return Get the atom's mass, in atomic mass units (or g/mol).
	 */
	UFUNCTION()
		float GetMass();

	/**
	 * @return The net charge on this atom, in multiples of fundamental charges.
	 */
	UFUNCTION()
		float GetCharge();

	/**
	 * @return The atom's covalent radius (i.e. size), in Angstroms.
	 */
	UFUNCTION()
		float GetCovalentRadius();

	/**
	 * @return The atom's Van Der Waals radius, in Angstroms.
	 */
	UFUNCTION()
		float GetVanDerWaalsRadius();

	/**
	 * @return The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol.
	 */
	UFUNCTION()
		float GetVanDerWaalsMagnitude();

	/**
	 * @return the 3D coordinates of the atom within the molecule.
	 */
	UFUNCTION()
		FVector GetPosition();

	/**
	 * Record this atom's index in its molecule's atom array, to simplify lookups later.
	 * @param Index - The array index, or -1 for none.
	 */
	UFUNCTION()
		void SetAtomIndex(int32 Index);

	/**
	 * Assign a mesh to this atom.
	 * TODO: Find out if all of the atoms can use the same mesh and material or if each one needs its own copy.
	 */
	UFUNCTION()
		void SetMesh(UStaticMeshComponent* Mesh);

	/**
	 * Assign a material to this atom.
	 */
	UFUNCTION()
		void SetMaterial(UMaterial* Material);

	/**
	 * @return this atom's index in its atom array, or -1 if not set.
	 */
	UFUNCTION()
		int32 GetAtomIndex();

	/** Get the atom's current mesh. */
	UFUNCTION()
		UStaticMeshComponent* GetMesh();

	/** Get the atom's current material. */
	UFUNCTION()
		UMaterial* GetMaterial();

private:
	/** Full English name of the atom*/
	UPROPERTY()
		FString Name;

	/** AMBER 94 type of atom*/
	UPROPERTY()
		FString Type;

	/** Atomic Symbol*/
	UPROPERTY()
		FString Symbol;

	/** Stores a representation of the bond for use in engine. */
	UPROPERTY()
		UStaticMeshComponent* AtomRepresentation;

	/** Stores the material for the static mesh of the representation. */
	UPROPERTY()
		UMaterial* AtomMaterial;

	/** Stores the desired Color for the Material for the representation. */
	UPROPERTY()
		FLinearColor Color;

	/** Covalent Radius of the atom, in Angstroms*/
	UPROPERTY()
		float CovalentRadius;

	/** Charge of the atom, in multiples of fundemental charges */
	UPROPERTY()
		int32 Charge;

	/** Mass of the atom, in atomic mass units (or g/mol). */
	UPROPERTY()
		float Mass;

	/** Charge of the atom, in multiples of fundemental charges */
	UPROPERTY()
		FVector Position;

	/** The AMBER94 van der Waals radius of the atom, in Angstroms */
	UPROPERTY()
		float VanDerWaalsRadius;

	/** The AMBER94 van der waals attraction magnitude of the Atom, in kCal/mol */
	UPROPERTY()
		float VanDerWaalsMagnitude;

	/** This atom's index in the molecule's atom array.  Simplifies lookups for bonds. */
	UPROPERTY()
		int32 AtomArrayIndex = -1;
};
