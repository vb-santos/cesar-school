import React, { useState } from 'react';
import { Stack } from 'expo-router';
import { StatusBar } from 'expo-status-bar';
import { ThemeProvider } from 'styled-components/native';
import { SafeAreaProvider } from 'react-native-safe-area-context';
import { lightTheme, darkTheme } from './theme/theme';
import { Header } from './components/Header';
import { Home } from './pages/Home';
import { View } from 'react-native';

export default function RootLayout() {
  const [modoNoturno, setModoNoturno] = useState(false);
  const theme = modoNoturno ? darkTheme : lightTheme;

  return (
    <ThemeProvider theme={theme}>
      <SafeAreaProvider>
        <StatusBar style={modoNoturno ? 'light' : 'dark'} />
        <View style={{ flex: 1, backgroundColor: theme.colors.background }}>
          <Header
            modoNoturno={modoNoturno}
            setModoNoturno={setModoNoturno}
            theme={theme}
          />
          <Home theme={theme} modoNoturno={modoNoturno} />
        </View>
      </SafeAreaProvider>
    </ThemeProvider>
  );
}