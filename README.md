# If you want to use run the project first download unreal version 5.4.4 and do this:

For all those that are working with a Motion Warping Object, you will need to A make sure to add it to your build.cs and two depending if they have fixed this already or not. 
Have to go into the uplugin file for MotionWarping at this location : UE_5.X\Engine\Plugins\Animation\MotionWarping
right click and go to note pad then scroll down to where is shows 
“Modules”: [
{
“Name”: “MotionWarping”,
“Type”: “Runtime”,
“LoadingPhase”: “Default”
}
and turn the Default into PreDefault. This is an unreal issue and they are aware of it to some extent but it seems to be a running issue throughout the several versions of Unreal Engine 5


If you are curious as to what this project is about, well it is a game about finding acceptance through grief. Currently it is in its early stages so there is only a basic level and movement, if you are interested in helping and find this project interesting let Macy1123 know and they will let you know what is currently in production or needs work!