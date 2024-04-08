#include "scene.hpp"

Scene::Scene() {}

void Scene::render() const
{
    for (auto &drawable : drawables)
    {
        drawable->draw();
    }
}

void Scene::add(Drawable *drawable)
{
    drawables.push_back(drawable);
}