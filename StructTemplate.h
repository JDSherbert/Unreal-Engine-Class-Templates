// ©2023 JDSherbert. All rights reserved.

#include <Runtime/Core/Public/CoreMinimal.h>

#include "StructTemplate.generated.h"

USTRUCT(Blueprintable, Category = "SomeCategory|SomeSubCategory")
struct FStructTemplate
{
	  GENERATED_BODY();

public:

	  FStructTemplate()
    : SomeInt(0)
    , SomeFloat(0.0f)
    {
        // Assign constructor values here
    }

    ~FStructTemplate()
    {
        // Assign destructor values here
    }

	  UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
	  int SomeInt;

    UPROPERTY(BlueprintReadWrite, Category = "SomeCategory|SomeSubCategory")
	  float SomeFloat;
};
