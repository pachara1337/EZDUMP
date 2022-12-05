#pragma once
#include <cstdint>

// 2022-12-05 06:53:AM UTC

namespace EZDUMP {
constexpr int64_t timestamp = 1670223229;
namespace netvars {
constexpr uintptr_t cs_gamerules_data = 0x0;
constexpr uintptr_t m_aimPunchAngle = 0x303C;
constexpr uintptr_t m_aimPunchAngleVel = 0x3048;
constexpr uintptr_t m_angEyeAnglesX = 0x117D0;
constexpr uintptr_t m_angEyeAnglesY = 0x117D4;
constexpr uintptr_t m_ArmorValue = 0x117CC;
constexpr uintptr_t m_bBombDefused = 0x29C0;
constexpr uintptr_t m_bBombPlanted = 0x9A5;
constexpr uintptr_t m_bBombTicking = 0x2990;
constexpr uintptr_t m_bFreezePeriod = 0x20;
constexpr uintptr_t m_bGunGameImmunity = 0x9990;
constexpr uintptr_t m_bHasDefuser = 0x117DC;
constexpr uintptr_t m_bHasHelmet = 0x117C0;
constexpr uintptr_t m_bInReload = 0x32B5;
constexpr uintptr_t m_bIsDefusing = 0x997C;
constexpr uintptr_t m_bIsQueuedMatchmaking = 0x74;
constexpr uintptr_t m_bIsScoped = 0x9974;
constexpr uintptr_t m_bIsValveDS = 0x7C;
constexpr uintptr_t m_bSpotted = 0x93D;
constexpr uintptr_t m_bSpottedByMask = 0x980;
constexpr uintptr_t m_bStartedArming = 0x3400;
constexpr uintptr_t m_bUseCustomAutoExposureMax = 0x9D9;
constexpr uintptr_t m_bUseCustomAutoExposureMin = 0x9D8;
constexpr uintptr_t m_bUseCustomBloomScale = 0x9DA;
constexpr uintptr_t m_clrRender = 0x70;
constexpr uintptr_t m_Collision = 0x320;
constexpr uintptr_t m_CollisionGroup = 0x474;
constexpr uintptr_t m_dwBoneMatrix = 0x26A8;
constexpr uintptr_t m_fAccuracyPenalty = 0x3340;
constexpr uintptr_t m_fFlags = 0x104;
constexpr uintptr_t m_flC4Blow = 0x29A0;
constexpr uintptr_t m_flCustomAutoExposureMax = 0x9E0;
constexpr uintptr_t m_flCustomAutoExposureMin = 0x9DC;
constexpr uintptr_t m_flCustomBloomScale = 0x9E4;
constexpr uintptr_t m_flDefuseCountDown = 0x29BC;
constexpr uintptr_t m_flDefuseLength = 0x29B8;
constexpr uintptr_t m_flFallbackWear = 0x31E0;
constexpr uintptr_t m_flFlashDuration = 0x10470;
constexpr uintptr_t m_flFlashMaxAlpha = 0x1046C;
constexpr uintptr_t m_flLastBoneSetupTime = 0x2928;
constexpr uintptr_t m_flLowerBodyYawTarget = 0x9ADC;
constexpr uintptr_t m_flNextAttack = 0x2D80;
constexpr uintptr_t m_flNextPrimaryAttack = 0x3248;
constexpr uintptr_t m_flSimulationTime = 0x268;
constexpr uintptr_t m_flTimerLength = 0x29A4;
constexpr uintptr_t m_hActiveWeapon = 0x2F08;
constexpr uintptr_t m_hBombDefuser = 0x29C4;
constexpr uintptr_t m_hMyWeapons = 0x2E08;
constexpr uintptr_t m_hObserverTarget = 0x339C;
constexpr uintptr_t m_hOwner = 0x29DC;
constexpr uintptr_t m_hOwnerEntity = 0x14C;
constexpr uintptr_t m_hViewModel = 0x3308;
constexpr uintptr_t m_iAccountID = 0x2FD8;
constexpr uintptr_t m_iClip1 = 0x3274;
constexpr uintptr_t m_iCompetitiveRanking = 0x1A84;
constexpr uintptr_t m_iCompetitiveWins = 0x1B88;
constexpr uintptr_t m_iCrosshairId = 0x11838;
constexpr uintptr_t m_iDefaultFOV = 0x333C;
constexpr uintptr_t m_iEntityQuality = 0x2FBC;
constexpr uintptr_t m_iFOV = 0x31F4;
constexpr uintptr_t m_iFOVStart = 0x31F8;
constexpr uintptr_t m_iGlowIndex = 0x10488;
constexpr uintptr_t m_iHealth = 0x100;
constexpr uintptr_t m_iItemDefinitionIndex = 0x2FBA;
constexpr uintptr_t m_iItemIDHigh = 0x2FD0;
constexpr uintptr_t m_iMostRecentModelBoneCounter = 0x2690;
constexpr uintptr_t m_iObserverMode = 0x3388;
constexpr uintptr_t m_iShotsFired = 0x103E0;
constexpr uintptr_t m_iState = 0x3268;
constexpr uintptr_t m_iTeamNum = 0xF4;
constexpr uintptr_t m_lifeState = 0x25F;
constexpr uintptr_t m_Local = 0x2FCC;
constexpr uintptr_t m_MoveType = 0x25C;
constexpr uintptr_t m_nBombSite = 0x2994;
constexpr uintptr_t m_nFallbackPaintKit = 0x31D8;
constexpr uintptr_t m_nFallbackSeed = 0x31DC;
constexpr uintptr_t m_nFallbackStatTrak = 0x31E4;
constexpr uintptr_t m_nForceBone = 0x268C;
constexpr uintptr_t m_nModelIndex = 0x258;
constexpr uintptr_t m_nTickBase = 0x3440;
constexpr uintptr_t m_nViewModelIndex = 0x29D0;
constexpr uintptr_t m_OriginalOwnerXuidHigh = 0x31D4;
constexpr uintptr_t m_OriginalOwnerXuidLow = 0x31D0;
constexpr uintptr_t m_rgflCoordinateFrame = 0x444;
constexpr uintptr_t m_SurvivalGameRuleDecisionTypes = 0x1328;
constexpr uintptr_t m_SurvivalRules = 0xD00;
constexpr uintptr_t m_szCustomName = 0x304C;
constexpr uintptr_t m_szLastPlaceName = 0x35C4;
constexpr uintptr_t m_thirdPersonViewAngles = 0x31E8;
constexpr uintptr_t m_vecOrigin = 0x138;
constexpr uintptr_t m_vecVelocity = 0x114;
constexpr uintptr_t m_vecViewOffset = 0x108;
constexpr uintptr_t m_viewPunchAngle = 0x3030;
constexpr uintptr_t m_zoomLevel = 0x33E0;
} // namespace netvars
namespace signatures {
constexpr uintptr_t anim_overlays = 0x2990;
constexpr uintptr_t clientstate_choked_commands = 0x4D30;
constexpr uintptr_t clientstate_delta_ticks = 0x174;
constexpr uintptr_t clientstate_last_outgoing_command = 0x4D2C;
constexpr uintptr_t clientstate_net_channel = 0x9C;
constexpr uintptr_t convar_name_hash_table = 0x301A0;
constexpr uintptr_t dwbSendPackets = 0xDCF92;
constexpr uintptr_t dwClientState = 0x59F194;
constexpr uintptr_t dwClientState_GetLocalPlayer = 0x180;
constexpr uintptr_t dwClientState_IsHLTV = 0x4D48;
constexpr uintptr_t dwClientState_Map = 0x28C;
constexpr uintptr_t dwClientState_MapDirectory = 0x188;
constexpr uintptr_t dwClientState_MaxPlayer = 0x388;
constexpr uintptr_t dwClientState_PlayerInfo = 0x52C0;
constexpr uintptr_t dwClientState_State = 0x108;
constexpr uintptr_t dwClientState_ViewAngles = 0x4D90;
constexpr uintptr_t dwEntityList = 0x4DFDE84;
constexpr uintptr_t dwForceAttack = 0x322BC8C;
constexpr uintptr_t dwForceAttack2 = 0x322BC98;
constexpr uintptr_t dwForceBackward = 0x322BCC8;
constexpr uintptr_t dwForceForward = 0x322BCBC;
constexpr uintptr_t dwForceJump = 0x52B9C0C;
constexpr uintptr_t dwForceLeft = 0x322BCD4;
constexpr uintptr_t dwForceRight = 0x322BCE0;
constexpr uintptr_t dwGameDir = 0x63AD80;
constexpr uintptr_t dwGameRulesProxy = 0x532D43C;
constexpr uintptr_t dwGetAllClasses = 0xE09FDC;
constexpr uintptr_t dwGlobalVars = 0x59EE58;
constexpr uintptr_t dwGlowObjectManager = 0x5358958;
constexpr uintptr_t dwInput = 0x525B458;
constexpr uintptr_t dwInterfaceLinkList = 0x999E44;
constexpr uintptr_t dwLocalPlayer = 0xDE8964;
constexpr uintptr_t dwMouseEnable = 0x52370B8;
constexpr uintptr_t dwMouseEnablePtr = 0x5237088;
constexpr uintptr_t dwPlayerResource = 0x322A030;
constexpr uintptr_t dwppDirect3DDevice9 = 0xA62C0;
constexpr uintptr_t dwRadarBase = 0x523495C;
constexpr uintptr_t dwSensitivity = 0xDECB80;
constexpr uintptr_t dwSensitivityPtr = 0xDECB80;
constexpr uintptr_t dwSetClanTag = 0x8DA80;
constexpr uintptr_t dwViewMatrix = 0x4DEECB4;
constexpr uintptr_t dwWeaponTable = 0x525C534;
constexpr uintptr_t dwWeaponTableIndex = 0x326C;
constexpr uintptr_t dwYawPtr = 0xDEC910;
constexpr uintptr_t dwZoomSensitivityRatioPtr = 0xDF2380;
constexpr uintptr_t find_hud_element = 0x2EDCE560;
constexpr uintptr_t force_update_spectator_glow = 0x3D7CFA;
constexpr uintptr_t interface_engine_cvar = 0x3FA9C;
constexpr uintptr_t is_c4_owner = 0x3E5500;
constexpr uintptr_t m_bDormant = 0xED;
constexpr uintptr_t m_bIsLocalPlayer = 0x3628;
constexpr uintptr_t m_flSpawnTime = 0x103C0;
constexpr uintptr_t m_pitchClassPtr = 0x5236FB0;
constexpr uintptr_t m_pStudioHdr = 0x2950;
constexpr uintptr_t m_yawClassPtr = 0xDEC910;
constexpr uintptr_t model_ambient_min = 0x5A118C;
constexpr uintptr_t set_abs_angles = 0x1E5C50;
constexpr uintptr_t set_abs_origin = 0x1E5A90;
} // namespace signatures
} // namespace EZDUMP