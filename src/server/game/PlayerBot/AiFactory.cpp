#include "AiFactory.h"
#include "PlayerbotAIConfig.h"
#include "Strategy_Oculus.h"

// ... existing code ...

void AiFactory::AddDefaultCombatStrategies(PlayerbotAI* const ai)
{
    // ... existing strategies ...

    if (sPlayerbotAIConfig.LoadOculusStrategy())
    {
        ai->addStrategy("oculus");
    }

    // ... existing code ...
}

// ... rest of the file ...