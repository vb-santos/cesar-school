import styled from 'styled-components/native';
import { Theme } from '@/app/theme/theme';

export const Card = styled.View<{ theme: Theme }>`
  background-color: ${props => props.theme.colors.card};
  border-radius: 12px;
  padding: 20px;
  margin: 16px;
  align-items: center;
  elevation: 3;
  shadow-color: #000;
  shadow-offset: 0px 2px;
  shadow-opacity: 0.1;
  shadow-radius: 4px;
`;

export const AvatarContainer = styled.View`
  margin-bottom: 16px;
`;

export const AvatarImage = styled.Image`
  width: 120px;
  height: 120px;
  border-radius: 60px;
  border-width: 3px;
  border-color: ${props => props.theme?.colors?.primary || '#007AFF'};
`;

export const InfoContainer = styled.View`
  align-items: center;
  width: 100%;
`;

export const NameText = styled.Text<{ theme: Theme }>`
  font-size: 20px;
  font-weight: bold;
  color: ${props => props.theme.colors.text};
  margin-bottom: 12px;
  text-align: center;
`;

export const ButtonToggleImage = styled.TouchableOpacity`
  background-color: transparent;
  padding: 8px 16px;
  border-radius: 8px;
  border-width: 1px;
  border-color: ${props => props.theme?.colors?.primary || '#007AFF'};
`;

export const ButtonToggleText = styled.Text<{ theme: Theme }>`
  color: ${props => props.theme.colors.primary};
  font-size: 14px;
  font-weight: 500;
`;