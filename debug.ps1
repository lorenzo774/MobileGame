# Open scrcpy
$process = Get-Process -Name "scrcpy" -ErrorAction SilentlyContinue;
if (!$process)
{
    Start-Process -NoNewWindow "scrcpy.exe"
}

# Uninstall app
adb.exe uninstall --user 0 com.lorenzo774.MobileGame
# Build app and install it
mingw32-make.exe PLATFORM=PLATFORM_ANDROID
# Open the app
adb.exe shell am start -n com.lorenzo774.MobileGame/.NativeLoader