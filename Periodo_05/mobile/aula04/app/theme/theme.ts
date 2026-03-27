export interface Theme {
  colors: {
    primary: string;
    primaryDark: string;
    background: string;
    card: string;
    text: string;
    textSecondary: string;
    border: string;
    inputBackground: string;
    inputBorder: string;
    inputFocus: string;
    buttonText: string;
    iconDefault: string;
    propagandaBorder: string;
    switchTrack: { false: string; true: string };
    switchThumb: { false: string; true: string };
  };
}

export const lightTheme: Theme = {
  colors: {
    primary: '#007AFF',
    primaryDark: '#0056b3',
    background: '#F5F5F5',
    card: '#FFFFFF',
    text: '#000000',
    textSecondary: '#666666',
    border: '#E0E0E0',
    inputBackground: '#FFFFFF',
    inputBorder: '#DDDDDD',
    inputFocus: '#007AFF',
    buttonText: '#FFFFFF',
    iconDefault: '#666666',
    propagandaBorder: '#FF4444',
    switchTrack: { false: '#767577', true: '#81b0ff' },
    switchThumb: { false: '#f4f3f4', true: '#f4f3f4' }
  }
};

export const darkTheme: Theme = {
  colors: {
    primary: '#0A84FF',
    primaryDark: '#0056b3',
    background: '#000000',
    card: '#1C1C1E',
    text: '#FFFFFF',
    textSecondary: '#8E8E93',
    border: '#38383A',
    inputBackground: '#1C1C1E',
    inputBorder: '#38383A',
    inputFocus: '#0A84FF',
    buttonText: '#FFFFFF',
    iconDefault: '#8E8E93',
    propagandaBorder: '#FF4444',
    switchTrack: { false: '#767577', true: '#0A84FF' },
    switchThumb: { false: '#f4f3f4', true: '#f4f3f4' }
  }
};