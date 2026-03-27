import styled from 'styled-components/native';
import { Theme } from '@/app/theme/theme';

export const Container = styled.View<{ theme: Theme }>`
  flex: 1;
  background-color: ${props => props.theme.colors.background};
  padding: 20px;
`;

export const InputContainer = styled.View<{ theme: Theme }>`
  margin-bottom: 24px;
`;

export const InputLabel = styled.Text<{ theme: Theme }>`
  font-size: 16px;
  font-weight: 500;
  color: ${props => props.theme.colors.text};
  margin-bottom: 8px;
`;

export const StyledTextInput = styled.TextInput<{ theme: Theme }>`
  background-color: ${props => props.theme.colors.inputBackground};
  border-width: 1px;
  border-color: ${props => props.theme.colors.inputBorder};
  border-radius: 12px;
  padding: 14px 16px;
  font-size: 16px;
  color: ${props => props.theme.colors.text};
  
  ${props => props.theme.colors.inputFocus && `
    &:focus {
      border-color: ${props.theme.colors.inputFocus};
    }
  `}
`;

export const SaveButton = styled.TouchableOpacity<{ theme: Theme }>`
  background-color: ${props => props.theme.colors.primary};
  padding: 16px;
  border-radius: 12px;
  align-items: center;
  margin-top: 8px;
`;

export const SaveButtonText = styled.Text<{ theme: Theme }>`
  color: ${props => props.theme.colors.buttonText};
  font-size: 18px;
  font-weight: bold;
`;

export const Footer = styled.View<{ theme: Theme }>`
  margin-top: 24px;
  padding: 16px;
  background-color: ${props => props.theme.colors.card};
  border-radius: 12px;
  align-items: center;
  gap: 8px;
`;