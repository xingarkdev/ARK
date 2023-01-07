#pragma once
#pragma comment (lib,"d3d9.lib")
#pragma comment (lib,"d3dx9.lib")
#include <wtypes.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <d3d9types.h>
#define IMGUI_DEFINE_MATH_OPERATORS
#include <fstream>
#include <filesystem>
#include <Lmcons.h>
#include <Hooking/D3D11Hooking.hpp>
#include "Hooking/HookLib.h"
#include "Hooking/D3D11Hooking.hpp"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_win32.h"
#include "ImGui/imgui_impl_dx11.h"
#include "ImGui/imgui_internal.h"
#include "ImGui/imgui_shadow.h"

IDirect3DTexture9* legit_image = nullptr;
IDirect3DTexture9* rage_image = nullptr;
IDirect3DTexture9* visuals_image = nullptr;
IDirect3DTexture9* players_image = nullptr;
IDirect3DTexture9* misc_image = nullptr;
IDirect3DTexture9* settings_image = nullptr;

int accent_color[4] = { 103, 0, 163, 255 };
int selection_count = 0;
int legit_group_count = 0;


void InitMenu()
{
}

void RenderMenu()

//menu is pasted from https://discord.gg/rG86p3e5fr
{
	ImGuiStyle& style = ImGui::GetStyle();

	//this part crashes, it should load the images stored as a byte array as a d3d texture
	//as a result the tabs are invisible, but can still be clicked

	/*if (legit_image == nullptr)D3DXCreateTextureFromFileInMemoryEx((LPDIRECT3DDEVICE9)D3D.Device
		, &legit, sizeof(legit),
		20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &legit_image);
	if (visuals_image == nullptr)D3DXCreateTextureFromFileInMemoryEx((LPDIRECT3DDEVICE9)D3D.Device
		, &visuals, sizeof(visuals),
		20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &visuals_image);
	if (misc_image == nullptr)D3DXCreateTextureFromFileInMemoryEx((LPDIRECT3DDEVICE9)D3D.Device
		, &misc, sizeof(misc),
		20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &misc_image);
	if (settings_image == nullptr)D3DXCreateTextureFromFileInMemoryEx((LPDIRECT3DDEVICE9)D3D.Device
		, &settings, sizeof(settings),
		20, 20, D3DX_DEFAULT, 0, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &settings_image);*/


	ImGui::SetNextWindowSize(ImVec2(100, 100));
	ImGui::SetNextWindowSize(ImVec2(680, 470));
	ImGui::Begin("жопа", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground);
	{
		const ImVec2 pos = ImGui::GetWindowPos();
		ImDrawList* draw = ImGui::GetWindowDrawList();

		style.ScrollbarSize = 3.f;
		style.ScrollbarRounding = 12.f;
		style.WindowBorderSize = 0.f;
		style.WindowPadding = ImVec2(0, 0);

		draw->AddRectFilled(pos + ImVec2(71, 56), pos + ImVec2(680, 470), ImColor(11, 11, 11, 255), 2.f, ImDrawFlags_RoundCornersBottomRight);

		draw->AddRectFilled(pos, pos + ImVec2(70, 470), ImColor(14, 14, 14, 255), 2.f, ImDrawFlags_RoundCornersLeft);
		draw->AddLine(pos + ImVec2(70, 0), pos + ImVec2(70, 470), ImColor(24, 24, 24, 255));

		draw->AddRectFilled(pos + ImVec2(71, 0), pos + ImVec2(680, 55), ImColor(14, 14, 14, 255), 2.f, ImDrawFlags_RoundCornersTopRight);
		draw->AddLine(pos + ImVec2(71, 55), pos + ImVec2(680, 55), ImColor(24, 24, 24, 255));

		draw->AddLine(pos + ImVec2(20, 176), pos + ImVec2(50, 176), ImColor(255, 255, 255, 15), 1.f);


		draw->AddCircleFilled(pos + ImVec2(35, 433), 16.f, ImColor(0, 0, 0, 50), 60.f);
		draw->AddCircle(pos + ImVec2(35, 433), 17.f, ImColor(255, 255, 255, 15), 60.f);

		ImGui::AddShadow(ImVec2(0, 0), ImVec2(680, 470), 20, 4, 7, 2, 20, ImColor(0, 0, 0));

		ImGui::SetCursorPos(ImVec2(10, 63));
		ImGui::BeginGroup();
		if (ImGui::selection("legit", legit_image, 0 == selection_count))
			selection_count = 0;
		if (ImGui::selection("visuals", visuals_image, 2 == selection_count))
			selection_count = 2;
		if (ImGui::selection("settings", settings_image, 5 == selection_count))
			selection_count = 5;
		ImGui::EndGroup();
		ImGui::SetCursorPos(ImVec2(85, 15));
		ImGui::BeginGroup();
		if (selection_count == 0)
		{
			if (ImGui::group("Legitbot", 0 == legit_group_count))
				legit_group_count = 0;
			ImGui::SameLine();
			if (ImGui::group("Triggerbot", 1 == legit_group_count))
				legit_group_count = 1;

			if (legit_group_count == 0)
			{
				ImGui::SetCursorPos(ImVec2(85, 70));
				ImGui::BeginChild("Aim Assistance", ImVec2(282, 386));

				static bool checkbox_on = true;
				ImGui::Checkbox("Checkbox ON", &checkbox_on);

				static bool checkbox_off = false;
				ImGui::Checkbox("Checkbox OFF", &checkbox_off);

				static int slider_int = 0;
				ImGui::SliderInt("Slider INT", &slider_int, 0, 100);

				static float slider_float = 0.f;
				ImGui::SliderFloat("Slider FLOAT", &slider_float, 0.f, 100.f);

				ImGui::Button("Button", ImVec2(262, 26));

				static int items_count = 0;
				const char* items[3] = { "One", "Two", "Three" };
				ImGui::Combo("Combo", &items_count, items, 3);

				static float color[4] = { 130.f / 255.f, 34.f / 255.f, 35.f / 255.f, 1.f };
				if (ImGui::ColorEdit4("Accent Color", color))
				{
					accent_color[0] = color[0] * 255.f;
					accent_color[1] = color[1] * 255.f;
					accent_color[2] = color[2] * 255.f;

				}
				ImGui::EndChild();

				ImGui::SetCursorPos(ImVec2(382, 70));
				ImGui::BeginChild("Aim Settings", ImVec2(282, 238));
				static bool блядство[50];

				for (int i = 1; i <= 50; i++)
					ImGui::Checkbox(std::to_string(i).c_str(), &блядство[i]);
				ImGui::EndChild();
			}

		}
		ImGui::EndGroup();

	}
	ImGui::End();

}

