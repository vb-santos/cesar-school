import styled from 'styled-components/native';

import { Theme } from "@/app/theme/theme";

export const Card = styled.View<{ theme: Theme; isPropaganda: boolean }>`
  flex-direction: row;
  align-items: center;
  padding: 15px 12px;
  margin-bottom: 8px;
  border-radius: 8px;
  border-bottom-width: 1px;
  border-left-width: 4px;
  border-bottom-color: ${props => props.theme.colors.border};
  border-left-color: ${props =>
  props.isPropaganda ? props.theme.colors.propagandaBorder : 'transparent'};
  background-color: ${props => props.theme.colors.card};
  elevation: 1;
  shadow-color: #000;
  shadow-offset: 0px 1px;
  shadow-opacity: 0.05;
  shadow-radius: 2px;
`;

export const Icone = styled.Text<{ theme: Theme }>`
  font-size: 24px;
  margin-right: 12px;
  width: 30px;
  text-align: center;
  color: ${props => props.theme.colors.iconDefault};
`;

export const ContentContainer = styled.View`
  flex: 1;
`;

export const Titulo = styled.Text<{ theme: Theme }>`
  font-size: 16px;
  font-weight: 500;
  margin-bottom: 4px;
  color: ${props => props.theme.colors.text};
`;

export const Timestamp = styled.Text<{ theme: Theme }>`
  font-size: 12px;
  font-weight: 400;
  color: ${props => props.theme.colors.textSecondary};
`;