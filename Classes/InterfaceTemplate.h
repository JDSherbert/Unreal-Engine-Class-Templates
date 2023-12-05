// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <Runtime/Core/Public/CoreMinimal.h>

#include "InterfaceTemplate.generated.h"

/**
 * Interface Template class
 * \n
 * Description goes here!
 * @since Unreal Engine 5.2
 * @author JDSherbert
 */
UINTERFACE(Blueprintable)
class TEMPLATE_API UInterfaceTemplate : public UInterface
{
	GENERATED_BODY()
};

class IInterfaceTemplate
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
    FORCEINLINE virtual void SomeVirtualFunction() const { return; }
};
