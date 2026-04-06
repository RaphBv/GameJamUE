#include "CustomBlueprintFunctionLibrary.h"

FRotator UCustomBlueprintFunctionLibrary::MakeSurfaceAlignedRotation(FVector _forward, FVector _surfaceNormal)
{
	_forward = FVector::VectorPlaneProject(_forward, _surfaceNormal).GetSafeNormal();
	FRotator _newRotation = FRotationMatrix::MakeFromXZ(_forward, _surfaceNormal).Rotator();
	return _newRotation;
}
