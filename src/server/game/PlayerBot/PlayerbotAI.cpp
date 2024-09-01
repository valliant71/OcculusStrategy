#include "PlayerbotAI.h"
#include "PlayerbotAIConfig.h"
#include "Strategy_Oculus.h"

// ... existing code ...

void PlayerbotAI::LoadStrategies()
{
    // ... existing strategies ...

    if (sPlayerbotAIConfig.LoadOculusStrategy())
    {
        strategies.push_back(new Strategy_Oculus(this));
    }

    // ... existing code ...
}

// ... rest of the file ...