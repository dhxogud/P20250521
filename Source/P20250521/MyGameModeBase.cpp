// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	UE_LOG(LogTemp, Warning, TEXT("안녕하세요"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("Hello World"));
	}
	PlayerControllerClass = AMyPlayerController::StaticClass(); // CDO(원본, C++에선 리플렉션이 없으니까 언리얼엔진에서 만들었음)를 가르키는 포인터임
	DefaultPawnClass = AMyPawn::StaticClass();
}