// Copyright PsinaDev 2025.


#include "DataConfigStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FDataConfigStyle::StyleInstance = nullptr;
#define IMAGE_BRUSH_SVG( RelativePath, ... ) FSlateVectorImageBrush(RootToContentDir(RelativePath, TEXT(".svg")), __VA_ARGS__)
void FDataConfigStyle::Initialize()
{
	if (StyleInstance.IsValid())
	{
		return;
	}

	StyleInstance = MakeShareable(new FSlateStyleSet("DataConfigStyle"));

	FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("DataConfigSystem"))->GetBaseDir() / TEXT("Resources");
	StyleInstance->SetContentRoot(ContentDir);

	StyleInstance->Set(
		"DataConfigSystem.AsyncLoadDataIcon",
		new FSlateVectorImageBrush(
			StyleInstance->RootToContentDir(TEXT("AsyncLoadDataIcon.svg")),
			FVector2D(16.0f, 20.3f), //ratio 1 : 1.337
		FSlateColor(FLinearColor::White)
		)
	);

	FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
}

void FDataConfigStyle::Shutdown()
{
	if (StyleInstance.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
		ensure(StyleInstance.IsUnique());
		StyleInstance.Reset();
	}
}

const ISlateStyle& FDataConfigStyle::Get()
{
	return *StyleInstance;
}

FName FDataConfigStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("DataConfigStyle"));
	return StyleSetName;
}
