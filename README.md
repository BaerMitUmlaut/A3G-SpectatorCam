# A3G-SpectatorCam
A simple spectator cam script made for AGM users. Compatible with ACRE and TFAR.

## Usage
To activate the camera when the player gets killed just copy the Description.ext and the scripts folder provided into your missions folder (usually found under `...\My Documents\Arma 3 - Other Profiles\Profilename\missions\Missioname.Mapname`). If you already have a Description.ext, copy the contents of the one provided into yours. Make sure you don't have any duplicate settings in your Description.ext.  
You can also execute the camera during the mission by using `[player] execVM "a3g-spectatorcam\initCam.sqf"`, just be aware that there is right now no way to exit the spectator camera, so you will be stuck in the camera until you respawn.

## Controls
Keybind | Usage
------- | -----
H | Show/Hide help
WASD | General movement
QE | Vertical movement
Shift | Faster movement
Alt | Slower movement
N | Default vision/night vision/thermal vision
Space | Free cam/3rd person/1st person - aim at unit to spectate
Arrow left/right | Switch to previous/next player

## Requirements
This camera was intended to be used with AGM, however it should also work without AGM. Nothing else is required.
