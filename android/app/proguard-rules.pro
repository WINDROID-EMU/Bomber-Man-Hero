# Bomberman Hero: Recompiled — ProGuard rules
# Keep SDL2 Java classes (called from native code)
-keep class org.libsdl.app.** { *; }

# Keep our own classes referenced from native
-keep class com.bmherorecompiled.** { *; }

# Keep JNI methods
-keepclassmembers class * {
    native <methods>;
}
