import styled from "styled-components/native";

import { Theme } from "@/app/theme/theme";

export const HeaderContainer = styled.View<{ theme: Theme }>`
  flex-direction: row;
  justify-content: space-between;
  align-items: center;
  padding: 15px 20px;
  border-bottom-width: 1px;
  border-bottom-color: ${props => props.theme.colors.border};
  background-color: ${props => props.theme.colors.header};
  elevation: 3;
  shadow-color: #000;
  shadow-offset: 0px 2px;
  shadow-opacity: 0.1;
  shadow-radius: 3px;
`;

export const HeaderTitle = styled.Text<{ theme: Theme }>`
  font-size: 20px;
  font-weight: 600;
  text-align: center;
  flex: 1;
  color: ${props => props.theme.colors.text};
`;