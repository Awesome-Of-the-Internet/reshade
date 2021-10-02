/*
 * Copyright (C) 2021 Patrick Mours
 * License: https://github.com/crosire/reshade#license
 */

#include "imgui_function_table.hpp"

imgui_function_table g_imgui_function_table = {
	ImGui::GetIO,
	ImGui::GetStyle,
	ImGui::Begin,
	ImGui::End,
	ImGui::BeginChild,
	ImGui::BeginChild,
	ImGui::EndChild,
	ImGui::IsWindowAppearing,
	ImGui::IsWindowCollapsed,
	ImGui::IsWindowFocused,
	ImGui::IsWindowHovered,
	ImGui::GetWindowDrawList,
	ImGui::GetWindowDpiScale,
	ImGui::GetWindowPos,
	ImGui::GetWindowSize,
	ImGui::GetWindowWidth,
	ImGui::GetWindowHeight,
	ImGui::SetNextWindowPos,
	ImGui::SetNextWindowSize,
	ImGui::SetNextWindowSizeConstraints,
	ImGui::SetNextWindowContentSize,
	ImGui::SetNextWindowCollapsed,
	ImGui::SetNextWindowFocus,
	ImGui::SetNextWindowBgAlpha,
	ImGui::SetNextWindowViewport,
	ImGui::SetWindowPos,
	ImGui::SetWindowSize,
	ImGui::SetWindowCollapsed,
	ImGui::SetWindowFocus,
	ImGui::SetWindowFontScale,
	ImGui::SetWindowPos,
	ImGui::SetWindowSize,
	ImGui::SetWindowCollapsed,
	ImGui::SetWindowFocus,
	ImGui::GetContentRegionAvail,
	ImGui::GetContentRegionMax,
	ImGui::GetWindowContentRegionMin,
	ImGui::GetWindowContentRegionMax,
	ImGui::GetWindowContentRegionWidth,
	ImGui::GetScrollX,
	ImGui::GetScrollY,
	ImGui::SetScrollX,
	ImGui::SetScrollY,
	ImGui::GetScrollMaxX,
	ImGui::GetScrollMaxY,
	ImGui::SetScrollHereX,
	ImGui::SetScrollHereY,
	ImGui::SetScrollFromPosX,
	ImGui::SetScrollFromPosY,
	ImGui::PushFont,
	ImGui::PopFont,
	ImGui::PushStyleColor,
	ImGui::PushStyleColor,
	ImGui::PopStyleColor,
	ImGui::PushStyleVar,
	ImGui::PushStyleVar,
	ImGui::PopStyleVar,
	ImGui::PushAllowKeyboardFocus,
	ImGui::PopAllowKeyboardFocus,
	ImGui::PushButtonRepeat,
	ImGui::PopButtonRepeat,
	ImGui::PushItemWidth,
	ImGui::PopItemWidth,
	ImGui::SetNextItemWidth,
	ImGui::CalcItemWidth,
	ImGui::PushTextWrapPos,
	ImGui::PopTextWrapPos,
	ImGui::GetFont,
	ImGui::GetFontSize,
	ImGui::GetFontTexUvWhitePixel,
	ImGui::GetColorU32,
	ImGui::GetColorU32,
	ImGui::GetColorU32,
	ImGui::Separator,
	ImGui::SameLine,
	ImGui::NewLine,
	ImGui::Spacing,
	ImGui::Dummy,
	ImGui::Indent,
	ImGui::Unindent,
	ImGui::BeginGroup,
	ImGui::EndGroup,
	ImGui::GetCursorPos,
	ImGui::GetCursorPosX,
	ImGui::GetCursorPosY,
	ImGui::SetCursorPos,
	ImGui::SetCursorPosX,
	ImGui::SetCursorPosY,
	ImGui::GetCursorStartPos,
	ImGui::GetCursorScreenPos,
	ImGui::SetCursorScreenPos,
	ImGui::AlignTextToFramePadding,
	ImGui::GetTextLineHeight,
	ImGui::GetTextLineHeightWithSpacing,
	ImGui::GetFrameHeight,
	ImGui::GetFrameHeightWithSpacing,
	ImGui::PushID,
	ImGui::PushID,
	ImGui::PushID,
	ImGui::PushID,
	ImGui::PopID,
	ImGui::GetID,
	ImGui::GetID,
	ImGui::GetID,
	ImGui::TextUnformatted,
	ImGui::TextV,
	ImGui::TextColoredV,
	ImGui::TextDisabledV,
	ImGui::TextWrappedV,
	ImGui::LabelTextV,
	ImGui::BulletTextV,
	ImGui::Button,
	ImGui::SmallButton,
	ImGui::InvisibleButton,
	ImGui::ArrowButton,
	ImGui::Image,
	ImGui::ImageButton,
	ImGui::Checkbox,
	ImGui::CheckboxFlags,
	ImGui::CheckboxFlags,
	ImGui::RadioButton,
	ImGui::RadioButton,
	ImGui::ProgressBar,
	ImGui::Bullet,
	ImGui::BeginCombo,
	ImGui::EndCombo,
	ImGui::Combo,
	ImGui::Combo,
	ImGui::Combo,
	ImGui::DragFloat,
	ImGui::DragFloat2,
	ImGui::DragFloat3,
	ImGui::DragFloat4,
	ImGui::DragFloatRange2,
	ImGui::DragInt,
	ImGui::DragInt2,
	ImGui::DragInt3,
	ImGui::DragInt4,
	ImGui::DragIntRange2,
	ImGui::DragScalar,
	ImGui::DragScalarN,
	ImGui::SliderFloat,
	ImGui::SliderFloat2,
	ImGui::SliderFloat3,
	ImGui::SliderFloat4,
	ImGui::SliderAngle,
	ImGui::SliderInt,
	ImGui::SliderInt2,
	ImGui::SliderInt3,
	ImGui::SliderInt4,
	ImGui::SliderScalar,
	ImGui::SliderScalarN,
	ImGui::VSliderFloat,
	ImGui::VSliderInt,
	ImGui::VSliderScalar,
	ImGui::InputText,
	ImGui::InputTextMultiline,
	ImGui::InputTextWithHint,
	ImGui::InputFloat,
	ImGui::InputFloat2,
	ImGui::InputFloat3,
	ImGui::InputFloat4,
	ImGui::InputInt,
	ImGui::InputInt2,
	ImGui::InputInt3,
	ImGui::InputInt4,
	ImGui::InputDouble,
	ImGui::InputScalar,
	ImGui::InputScalarN,
	ImGui::ColorEdit3,
	ImGui::ColorEdit4,
	ImGui::ColorPicker3,
	ImGui::ColorPicker4,
	ImGui::ColorButton,
	ImGui::SetColorEditOptions,
	ImGui::TreeNode,
	ImGui::TreeNodeV,
	ImGui::TreeNodeV,
	ImGui::TreeNodeEx,
	ImGui::TreeNodeExV,
	ImGui::TreeNodeExV,
	ImGui::TreePush,
	ImGui::TreePush,
	ImGui::TreePop,
	ImGui::GetTreeNodeToLabelSpacing,
	ImGui::CollapsingHeader,
	ImGui::CollapsingHeader,
	ImGui::SetNextItemOpen,
	ImGui::Selectable,
	ImGui::Selectable,
	ImGui::BeginListBox,
	ImGui::EndListBox,
	ImGui::ListBox,
	ImGui::ListBox,
	ImGui::PlotLines,
	ImGui::PlotLines,
	ImGui::PlotHistogram,
	ImGui::PlotHistogram,
	ImGui::Value,
	ImGui::Value,
	ImGui::Value,
	ImGui::Value,
	ImGui::BeginMenuBar,
	ImGui::EndMenuBar,
	ImGui::BeginMainMenuBar,
	ImGui::EndMainMenuBar,
	ImGui::BeginMenu,
	ImGui::EndMenu,
	ImGui::MenuItem,
	ImGui::MenuItem,
	ImGui::BeginTooltip,
	ImGui::EndTooltip,
	ImGui::SetTooltipV,
	ImGui::BeginPopup,
	ImGui::BeginPopupModal,
	ImGui::EndPopup,
	ImGui::OpenPopup,
	ImGui::OpenPopup,
	ImGui::OpenPopupOnItemClick,
	ImGui::CloseCurrentPopup,
	ImGui::BeginPopupContextItem,
	ImGui::BeginPopupContextWindow,
	ImGui::BeginPopupContextVoid,
	ImGui::IsPopupOpen,
	ImGui::BeginTable,
	ImGui::EndTable,
	ImGui::TableNextRow,
	ImGui::TableNextColumn,
	ImGui::TableSetColumnIndex,
	ImGui::TableSetupColumn,
	ImGui::TableSetupScrollFreeze,
	ImGui::TableHeadersRow,
	ImGui::TableHeader,
	ImGui::TableGetSortSpecs,
	ImGui::TableGetColumnCount,
	ImGui::TableGetColumnIndex,
	ImGui::TableGetRowIndex,
	ImGui::TableGetColumnFlags,
	ImGui::TableSetColumnEnabled,
	ImGui::TableSetBgColor,
	ImGui::Columns,
	ImGui::NextColumn,
	ImGui::GetColumnIndex,
	ImGui::GetColumnWidth,
	ImGui::SetColumnWidth,
	ImGui::GetColumnOffset,
	ImGui::SetColumnOffset,
	ImGui::GetColumnsCount,
	ImGui::BeginTabBar,
	ImGui::EndTabBar,
	ImGui::BeginTabItem,
	ImGui::EndTabItem,
	ImGui::TabItemButton,
	ImGui::SetTabItemClosed,
	ImGui::DockSpace,
	ImGui::DockSpaceOverViewport,
	ImGui::SetNextWindowDockID,
	ImGui::SetNextWindowClass,
	ImGui::GetWindowDockID,
	ImGui::IsWindowDocked,
	ImGui::BeginDragDropSource,
	ImGui::SetDragDropPayload,
	ImGui::EndDragDropSource,
	ImGui::BeginDragDropTarget,
	ImGui::EndDragDropTarget,
	ImGui::BeginDisabled,
	ImGui::EndDisabled,
	ImGui::PushClipRect,
	ImGui::PopClipRect,
	ImGui::SetItemDefaultFocus,
	ImGui::SetKeyboardFocusHere,
	ImGui::IsItemHovered,
	ImGui::IsItemActive,
	ImGui::IsItemFocused,
	ImGui::IsItemClicked,
	ImGui::IsItemVisible,
	ImGui::IsItemEdited,
	ImGui::IsItemActivated,
	ImGui::IsItemDeactivated,
	ImGui::IsItemDeactivatedAfterEdit,
	ImGui::IsItemToggledOpen,
	ImGui::IsAnyItemHovered,
	ImGui::IsAnyItemActive,
	ImGui::IsAnyItemFocused,
	ImGui::GetItemRectMin,
	ImGui::GetItemRectMax,
	ImGui::GetItemRectSize,
	ImGui::SetItemAllowOverlap,
	ImGui::GetMainViewport,
	ImGui::IsRectVisible,
	ImGui::IsRectVisible,
	ImGui::GetTime,
	ImGui::GetFrameCount,
	ImGui::GetBackgroundDrawList,
	ImGui::GetForegroundDrawList,
	ImGui::GetBackgroundDrawList,
	ImGui::GetForegroundDrawList,
	ImGui::GetDrawListSharedData,
	ImGui::SetStateStorage,
	ImGui::GetStateStorage,
	ImGui::CalcListClipping,
	ImGui::BeginChildFrame,
	ImGui::EndChildFrame,
	ImGui::CalcTextSize,
	ImGui::ColorConvertU32ToFloat4,
	ImGui::ColorConvertFloat4ToU32,
	ImGui::ColorConvertRGBtoHSV,
	ImGui::ColorConvertHSVtoRGB,
	ImGui::GetKeyIndex,
	ImGui::IsKeyDown,
	ImGui::IsKeyPressed,
	ImGui::IsKeyReleased,
	ImGui::GetKeyPressedAmount,
	ImGui::CaptureKeyboardFromApp,
	ImGui::IsMouseDown,
	ImGui::IsMouseClicked,
	ImGui::IsMouseReleased,
	ImGui::IsMouseDoubleClicked,
	ImGui::IsMouseHoveringRect,
	ImGui::IsMousePosValid,
	ImGui::IsAnyMouseDown,
	ImGui::GetMousePos,
	ImGui::GetMousePosOnOpeningCurrentPopup,
	ImGui::IsMouseDragging,
	ImGui::GetMouseDragDelta,
	ImGui::ResetMouseDragDelta,
	ImGui::GetMouseCursor,
	ImGui::SetMouseCursor,
	ImGui::CaptureMouseFromApp,
	ImGui::SetClipboardText,
	ImGui::DebugCheckVersionAndDataLayout,
	ImGui::SetAllocatorFunctions,
	ImGui::GetAllocatorFunctions,
	ImGui::MemAlloc,
	ImGui::MemFree,
	ImGui::GetPlatformIO,
	ImGui::UpdatePlatformWindows,
	ImGui::RenderPlatformWindowsDefault,
	ImGui::DestroyPlatformWindows,
	ImGui::FindViewportByID,
	ImGui::FindViewportByPlatformHandle,
};
