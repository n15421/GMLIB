#pragma once
#include "GMLIB/Event/Entity/ItemActorEvent.h"
#include "GMLIB/GMLIB.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/entity/MobEvent.h"
#include "mc/world/actor/ActorDamageSource.h"

namespace GMLIB::Event::EntityEvent {

class MobHurtAfterEvent : public ll::event::MobEvent {
    ActorDamageSource& mSource;
    float&             mDamage;

public:
    constexpr explicit MobHurtAfterEvent(Mob& mob, ActorDamageSource& source, float& damage)
    : MobEvent(mob),
      mSource(source),
      mDamage(damage) {}

    GMLIB_API ActorDamageSource& getSource() const;
    GMLIB_API float&             getDamage() const;
};

} // namespace GMLIB::Event::EntityEvent