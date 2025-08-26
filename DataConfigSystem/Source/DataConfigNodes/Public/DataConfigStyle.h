// Copyright PsinaDev 2025.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

/**
 * Handles registering and providing access to custom Slate styles (icons, brushes).
 */
class FDataConfigStyle
{
public:
	/** Initialize and register the style set */
	static void Initialize();

	/** Unregister and clean up the style set */
	static void Shutdown();

	/** Get current style instance */
	static const ISlateStyle& Get();

	/** Get the style set name */
	static FName GetStyleSetName();

private:
	/** Internal style instance */
	static TSharedPtr<FSlateStyleSet> StyleInstance;
};
