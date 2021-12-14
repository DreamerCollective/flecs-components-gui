#ifndef FLECS_COMPONENTS_GUI_H
#define FLECS_COMPONENTS_GUI_H

/* This generated file contains includes for project dependencies */
#include "flecs-components-gui/bake_config.h"

// Reflection system boilerplate
#undef ECS_META_IMPL
#ifndef FLECS_COMPONENTS_GUI_IMPL
#define ECS_META_IMPL EXTERN // Ensure meta symbols are only defined once
#endif

ECS_STRUCT(EcsCanvas, {
    char *title;
    int32_t width;
    int32_t height;
    EcsRgb background_color;
    ecs_entity_t camera;
    EcsRgb ambient_light;
    ecs_entity_t directional_light;
});

#ifdef __cplusplus
extern "C" {
#endif

FLECS_COMPONENTS_GUI_API
void FlecsComponentsGuiImport(
    ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

namespace flecs {
namespace components {

class gui : FlecsComponentsGui {
public:
    struct Canvas : EcsCanvas {
        Canvas() {
            this->title = nullptr;

            this->ambient_light.r = 1.0;
            this->ambient_light.g = 1.0;
            this->ambient_light.b = 1.0;

            this->background_color.r = 0.0;
            this->background_color.g = 0.0;
            this->background_color.b = 0.0;

            this->camera = 0;
            this->directional_light = 0;
        }
    };

    gui(flecs::world& ecs) {
        FlecsComponentsGuiImport(ecs);

        ecs.module<flecs::components::gui>();

        ecs.pod_component<Canvas>("flecs::components::gui::Canvas");
    }
};

}
}

#endif

#endif
