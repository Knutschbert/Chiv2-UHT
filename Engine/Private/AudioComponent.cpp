#include "AudioComponent.h"

void UAudioComponent::StopDelayed(float DelayTime) {
}

void UAudioComponent::Stop() {
}

void UAudioComponent::SetWaveParameter(FName inName, USoundWave* InWave) {
}

void UAudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
}

void UAudioComponent::SetUISound(bool bInUISound) {
}

void UAudioComponent::SetSubmixSend(USoundSubmixBase* Submix, float SendLevel) {
}

void UAudioComponent::SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
}

void UAudioComponent::SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel) {
}

void UAudioComponent::SetSound(USoundBase* NewSound) {
}

void UAudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}

void UAudioComponent::SetPaused(bool bPause) {
}

void UAudioComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
}

void UAudioComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
}

void UAudioComponent::SetIntParameter(FName inName, int32 inInt) {
}

void UAudioComponent::SetFloatParameter(FName inName, float InFloat) {
}

void UAudioComponent::SetBoolParameter(FName inName, bool InBool) {
}

void UAudioComponent::Play(float StartTime) {
}

bool UAudioComponent::IsPlaying() const {
    return false;
}

bool UAudioComponent::HasCookedFFTData() const {
    return false;
}

bool UAudioComponent::HasCookedAmplitudeEnvelopeData() const {
    return false;
}

EAudioComponentPlayState UAudioComponent::GetPlayState() const {
    return EAudioComponentPlayState::Playing;
}

bool UAudioComponent::GetCookedFFTDataForAllPlayingSounds(TArray<FSoundWaveSpectralDataPerSound>& OutSoundWaveSpectralData) {
    return false;
}

bool UAudioComponent::GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<FSoundWaveSpectralData>& OutSoundWaveSpectralData) {
    return false;
}

bool UAudioComponent::GetCookedEnvelopeDataForAllPlayingSounds(TArray<FSoundWaveEnvelopeDataPerSound>& OutEnvelopeData) {
    return false;
}

bool UAudioComponent::GetCookedEnvelopeData(float& OutEnvelopeData) {
    return false;
}

void UAudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) {
}

void UAudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) {
}

bool UAudioComponent::BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings) {
    return false;
}

void UAudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve) {
}

void UAudioComponent::AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings) {
}

UAudioComponent::UAudioComponent() {
    this->Sound = NULL;
    this->SoundClassOverride = NULL;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bShouldRemainActiveIfDropped = false;
    this->bAllowSpatialization = true;
    this->bOverrideAttenuation = false;
    this->bOverrideSubtitlePriority = false;
    this->bIsUISound = false;
    this->bEnableLowPassFilter = false;
    this->bOverridePriority = false;
    this->bSuppressSubtitles = false;
    this->bAutoManageAttachment = false;
    this->PitchModulationMin = 1.00f;
    this->PitchModulationMax = 1.00f;
    this->VolumeModulationMin = 1.00f;
    this->VolumeModulationMax = 1.00f;
    this->VolumeMultiplier = 1.00f;
    this->EnvelopeFollowerAttackTime = 10;
    this->EnvelopeFollowerReleaseTime = 100;
    this->Priority = 1.00f;
    this->SubtitlePriority = 10000.00f;
    this->SourceEffectChain = NULL;
    this->PitchMultiplier = 1.00f;
    this->LowPassFilterFrequency = 20000.00f;
    this->AttenuationSettings = NULL;
    this->ConcurrencySettings = NULL;
    this->AutoAttachLocationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachRotationRule = EAttachmentRule::KeepRelative;
    this->AutoAttachScaleRule = EAttachmentRule::KeepRelative;
}

