using UnrealBuildTool;

public class DataConfigNodes : ModuleRules
{
	public DataConfigNodes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"UnrealEd",
				"BlueprintGraph",
				"KismetCompiler",
				"GameplayTags"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore",
				"EditorStyle",
				"EditorWidgets",
				"GraphEditor",
				"Kismet",
				"KismetWidgets",
				"PropertyEditor",
				"BlueprintGraph",
				"KismetCompiler",
				"DataConfigSystem",
				"Projects"
			}
		);
	}
}