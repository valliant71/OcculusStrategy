set(PLAYERBOT_SRCS
  ${PLAYERBOT_SRCS}
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Strategy_Oculus.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Actions/MountDrakeAction.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Actions/UseDrakeAbilityAction.cpp
)

set(PLAYERBOT_HEADERS
  ${PLAYERBOT_HEADERS}
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Strategy_Oculus.h
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Actions/MountDrakeAction.h
  ${CMAKE_CURRENT_SOURCE_DIR}/AI/Actions/UseDrakeAbilityAction.h
)