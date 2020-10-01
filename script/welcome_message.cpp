#include <gazebo/gazebo.hh>

namespace gazebo
{
    class WelcomePluginMyRobot : public WorldPlugin
    {
        public: WelcomePluginMyRobot() : WorldPlugin()
         {
             printf("Welcome to Gustavo's World!\n");
         }
        public: void Load(physics:: WorldPtr _world, sdf:: ElementPtr _sdf)
        {
            
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WelcomePluginMyRobot);
}
