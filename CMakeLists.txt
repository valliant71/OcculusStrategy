option(PLAYERBOT_OCULUS_STRATEGY "Enable Oculus dungeon strategy for PlayerBots" ON)

if(PLAYERBOT_OCULUS_STRATEGY)
  add_definitions(-DPLAYERBOT_OCULUS_STRATEGY)
endif()