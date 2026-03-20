import React, { useState } from 'react';
import { StatusBar } from 'react-native';
import { ThemeProvider } from 'styled-components';

import { lightTheme, darkTheme } from "../../theme/theme";
import { noticias } from "../../mocks/noticias";
import { Header } from "../../components/Header";
import { NoticiaCard } from "../../components/NoticiaCard";
import { Container, ScrollContainer, Footer } from "../../theme/global";

export const Home = () => {
  const [modoNoturno, setModoNoturno] = useState(false);
  const theme = modoNoturno ? darkTheme : lightTheme;

  return (
    <ThemeProvider theme={theme}>
      <Container>
        <StatusBar
          barStyle={modoNoturno ? 'light-content' : 'dark-content'}
          backgroundColor={theme.colors.header}
        />

        <Header
          modoNoturno={modoNoturno}
          setModoNoturno={setModoNoturno}
          theme={theme}
        />

        <ScrollContainer>
          {noticias.map((noticia) => (
            <NoticiaCard
              key={noticia.id}
              noticia={noticia}
              theme={theme}
            />
          ))}
          <Footer />
        </ScrollContainer>
      </Container>
    </ThemeProvider>
  );
};
