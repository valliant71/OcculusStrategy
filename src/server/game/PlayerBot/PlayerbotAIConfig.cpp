bool PlayerbotAIConfig::LoadOculusStrategy()
{
#ifdef PLAYERBOT_OCULUS_STRATEGY
    return true;
#else
    return false;
#endif
}