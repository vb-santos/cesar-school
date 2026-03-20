import styled from 'styled-components/native';

import { Theme } from "@/app/theme/theme";

export const Container = styled.SafeAreaView<{ theme: Theme }>`
  flex: 1;
  padding-top: 50px;
  background-color: ${props => props.theme.colors.background[0]};
`;

export const ScrollContainer = styled.ScrollView.attrs({
  contentContainerStyle: {
    padding: 16,
  },
  showsVerticalScrollIndicator: false,
})`
  flex: 1;
`;

export const Footer = styled.View`
  height: 20px;
`;