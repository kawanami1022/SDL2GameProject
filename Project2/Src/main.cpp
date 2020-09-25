#include "Scene/SceneManager.h"

int main(int argc, char* argv[]) {
    SceneManager::GethInstance().Run();
    SceneManager::GethInstance().Destroy();
    return 0;
}
