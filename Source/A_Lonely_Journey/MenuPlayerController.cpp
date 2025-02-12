// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

//void AMenuPlayerController::BeginPlay()
//{
//	Super::BeginPlay();
//
//	widgetToUse = CreateWidget<UUserWidget>(this, UIWidget);
//	if (widgetToUse != nullptr)
//	{
//		widgetToUse->AddToViewport();
//
//		FInputModeUIOnly uiClickin = uiClickin.SetWidgetToFocus(widgetToUse->TakeWidget());
//		uiClickin.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
//		SetInputMode(uiClickin);
//	}
//}