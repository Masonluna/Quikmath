workspace "Quikmath"
    architecture "x64"

    configurations {
        "Debug",
        "Release"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

    project "Quikmath"
        location "Quikmath"
        kind "ConsoleApp"
        language "C++"

        targetdir ("bin/" .. outputdir .. "/%{prj.name}")
        objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

        files {
            "%{prj.name}/src/**.h",
            "%{prj.name}/src/**.cpp"
        }

        includedirs {
            "%{prj.name}/src"
        }

        filter "system:windows"
            cppdialect "C++17"
            staticruntime "On"
            systemversion "latest"

        filter "configurations:Debug"
            defines "QK_DEBUG"
            symbols "On"
        
        filter "configurations:Release"
            defines "QK_RELEASE"
            optimize "On"

        filter "configurations:Dist"
            defines "QK_DIST"
            optimize "On"
            