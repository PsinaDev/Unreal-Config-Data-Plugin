#include "DataConfigNodes.h"
#include "DataConfigStyle.h"

#define LOCTEXT_NAMESPACE "FDataConfigNodesModule"

void FDataConfigNodesModule::StartupModule()
{
	FDataConfigStyle::Initialize();
}

void FDataConfigNodesModule::ShutdownModule()
{
	FDataConfigStyle::Shutdown();
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FDataConfigNodesModule, DataConfigNodes)