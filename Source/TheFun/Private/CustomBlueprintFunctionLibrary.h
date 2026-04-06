#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomBlueprintFunctionLibrary.generated.h"


UCLASS()
class UCustomBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Gravity") static FRotator MakeSurfaceAlignedRotation(FVector _forward, FVector _surfaceNormal);
	
};
