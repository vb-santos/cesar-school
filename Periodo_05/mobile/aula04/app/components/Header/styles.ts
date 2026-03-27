import styled from 'styled-components/native';
import { Theme } from '@/app/theme/theme';

export const HeaderContainer = styled.View<{ theme: Theme }>`
  flex-direction: row;
  justify-content: space-between;
  align-items: center;
  padding: 20px 16px;
  background-color: ${props => props.theme.colors.card};
  border-bottom-width: 1px;
  border-bottom-color: ${props => props.theme.colors.border};
`;

export const HeaderTitle = styled.Text<{ theme: Theme }>`
  font-size: 20px;
  font-weight: bold;
  color: ${props => props.theme.colors.text};
`;