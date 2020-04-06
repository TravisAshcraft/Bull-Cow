// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "Containers/UnrealString.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Hello and welcome to Bull Cow!!"));
    PrintLine(TEXT("By pressing tab, then enter you will be able to type on the console"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("ride");
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You Win!"));
    }
    else
    {
        PrintLine(TEXT("YOU SUCK!"));
    }
    
}