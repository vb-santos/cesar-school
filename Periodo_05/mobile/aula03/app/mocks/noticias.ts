export interface Noticia {
  id: number;
  titulo: string;
  timestamp: string;
  icone: string;
  tipo: string;
}

export const noticias: Noticia[] = [
  {
    id: 1,
    titulo: 'Propaganda #5 ativa',
    timestamp: 'há 5 minutos',
    icone: '📰',
    tipo: 'propaganda'
  },
  {
    id: 2,
    titulo: 'Nova atualização disponível',
    timestamp: 'há 15 minutos',
    icone: '📱',
    tipo: 'atualizacao'
  },
  {
    id: 3,
    titulo: 'Sistema em manutenção',
    timestamp: 'há 30 minutos',
    icone: '🔧',
    tipo: 'manutencao'
  },
  {
    id: 4,
    titulo: 'Usuário #123 logou',
    timestamp: 'há 1 hora',
    icone: '👤',
    tipo: 'usuario'
  },
  {
    id: 5,
    titulo: 'Backup concluído',
    timestamp: 'há 2 horas',
    icone: '💾',
    tipo: 'backup'
  },
  {
    id: 6,
    titulo: 'Erro #404 resolvido',
    timestamp: 'há 3 horas',
    icone: '✅',
    tipo: 'erro'
  },
  {
    id: 7,
    titulo: 'Novo recurso adicionado',
    timestamp: 'há 5 horas',
    icone: '✨',
    tipo: 'recurso'
  },
  {
    id: 8,
    titulo: 'Propaganda #8 ativa',
    timestamp: 'há 6 horas',
    icone: '📰',
    tipo: 'propaganda'
  },
  {
    id: 9,
    titulo: 'Propaganda #12 em análise',
    timestamp: 'há 8 horas',
    icone: '📰',
    tipo: 'propaganda'
  },
];