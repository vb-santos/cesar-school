export interface Theme {
  colors: {
    background: string[];
    text: string;
    textSecondary: string;
    card: string;
    border: string;
    header: string;
    switchTrack: { false: string; true: string };
    switchThumb: { false: string; true: string };
    propagandaBorder: string;
    iconDefault: string;
  };
}

export const lightTheme: Theme = {
  colors: {
    background: ['#f5f5f5', '#e0e0e0'],
    text: '#333333',
    textSecondary: '#666666',
    card: '#ffffff',
    border: '#e0e0e0',
    header: '#ffffff',
    switchTrack: { false: '#767577', true: '#81b0ff' },
    switchThumb: { false: '#f4f3f4', true: '#f5dd4b' },
    propagandaBorder: '#007AFF',
    iconDefault: '#333333',
  },
};

export const darkTheme: Theme = {
  colors: {
    background: ['#1a1a1a', '#2d2d2d'],
    text: '#ffffff',
    textSecondary: '#aaaaaa',
    card: '#2d2d2d',
    border: '#404040',
    header: '#0d0d0d',
    switchTrack: { false: '#767577', true: '#81b0ff' },
    switchThumb: { false: '#f4f3f4', true: '#f5dd4b' },
    propagandaBorder: '#3399ff',
    iconDefault: '#ffffff',
  },
};