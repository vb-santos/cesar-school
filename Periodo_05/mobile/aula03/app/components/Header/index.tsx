import React from 'react';
import { Switch } from 'react-native';

import { Theme } from "@/app/theme/theme";

import { HeaderContainer, HeaderTitle } from "./styles";

interface HeaderProps {
  modoNoturno: boolean;
  setModoNoturno: (value: boolean) => void;
  theme: Theme;
}

export const Header = ({ modoNoturno, setModoNoturno, theme }: HeaderProps) => {
  return (
    <HeaderContainer theme={theme}>
      <HeaderTitle theme={theme}>Atualização em Andamento</HeaderTitle>
      <Switch
        value={modoNoturno}
        onValueChange={setModoNoturno}
        trackColor={theme.colors.switchTrack}
        thumbColor={modoNoturno ? theme.colors.switchThumb.true : theme.colors.switchThumb.false}
      />
    </HeaderContainer>
  );
};
