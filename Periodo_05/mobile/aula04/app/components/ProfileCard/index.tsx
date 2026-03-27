import React from 'react';
import { Image, TouchableOpacity } from 'react-native';
import { Theme } from '@/app/theme/theme';
import {
  Card,
  AvatarContainer,
  AvatarImage,
  InfoContainer,
  NameText,
  ButtonToggleImage,
  ButtonToggleText
} from './styles';

interface ProfileCardProps {
  theme: Theme;
  name: string;
  avatarUrl: string;
  onToggleImage: () => void;
}

export const ProfileCard = ({ theme, name, avatarUrl, onToggleImage }: ProfileCardProps) => {
  return (
    <Card theme={theme}>
      <AvatarContainer>
        <AvatarImage
          source={{ uri: avatarUrl }}
          resizeMode="cover"
        />
      </AvatarContainer>

      <InfoContainer>
        <NameText theme={theme}>{name || 'Nome não informado'}</NameText>
        <ButtonToggleImage onPress={onToggleImage}>
          <ButtonToggleText theme={theme}>Trocar Foto</ButtonToggleText>
        </ButtonToggleImage>
      </InfoContainer>
    </Card>
  );
};