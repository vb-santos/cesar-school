import React from 'react';

import { Theme } from "@/app/theme/theme";

import { Card, Icone, Titulo, Timestamp, ContentContainer } from "./styles";

interface Noticia {
  id: number;
  titulo: string;
  timestamp: string;
  icone: string;
  tipo: string;
}

interface NoticiaCardProps {
  noticia: Noticia;
  theme: Theme;
}

export const NoticiaCard = ({ noticia, theme }: NoticiaCardProps) => {
  const isPropaganda = noticia.tipo === 'propaganda';

  return (
    <Card theme={theme} isPropaganda={isPropaganda}>
      <Icone theme={theme}>{noticia.icone}</Icone>
      <ContentContainer>
        <Titulo theme={theme}>{noticia.titulo}</Titulo>
        <Timestamp theme={theme}>{noticia.timestamp}</Timestamp>
      </ContentContainer>
    </Card>
  );
};
