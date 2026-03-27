import React, { useState } from 'react';
import {
  View,
  TextInput,
  TouchableOpacity,
  Text,
  Alert,
  KeyboardAvoidingView,
  Platform,
  ScrollView
} from 'react-native';
import { Theme } from '@/app/theme/theme';
import {
  Container,
  InputContainer,
  InputLabel,
  StyledTextInput,
  SaveButton,
  SaveButtonText,
  Footer
} from './styles';

interface HomeProps {
  theme: Theme;
  modoNoturno: boolean;
}

const AVATAR_OPTIONS = [
  'https://randomuser.me/api/portraits/men/1.jpg',
  'https://randomuser.me/api/portraits/women/1.jpg',
  'https://randomuser.me/api/portraits/men/2.jpg',
  'https://randomuser.me/api/portraits/women/2.jpg'
];

export const Home = ({ theme, modoNoturno }: HomeProps) => {
  const [nome, setNome] = useState('');
  const [avatarIndex, setAvatarIndex] = useState(0);
  const [savedName, setSavedName] = useState('');

  const handleSave = () => {
    if (nome.trim()) {
      setSavedName(nome);
      Alert.alert(
        'Perfil Salvo!',
        `Olá ${nome}, seu perfil foi salvo com sucesso!`,
        [{ text: 'OK', onPress: () => console.log('OK Pressed') }]
      );
    } else {
      Alert.alert(
        'Atenção',
        'Por favor, digite seu nome antes de salvar.',
        [{ text: 'OK' }]
      );
    }
  };

  const toggleAvatar = () => {
    setAvatarIndex((prev) => (prev + 1) % AVATAR_OPTIONS.length);
  };

  return (
    <KeyboardAvoidingView
      behavior={Platform.OS === 'ios' ? 'padding' : 'height'}
      style={{ flex: 1 }}
    >
      <ScrollView
        contentContainerStyle={{ flexGrow: 1 }}
        keyboardShouldPersistTaps="handled"
      >
        <Container theme={theme}>
          <View style={{ alignItems: 'center', marginVertical: 20 }}>
            <View style={{
              width: 150,
              height: 150,
              borderRadius: 75,
              backgroundColor: theme.colors.card,
              justifyContent: 'center',
              alignItems: 'center',
              borderWidth: 3,
              borderColor: theme.colors.primary,
              overflow: 'hidden'
            }}>
              <Image
                source={{ uri: AVATAR_OPTIONS[avatarIndex] }}
                style={{
                  width: '100%',
                  height: '100%',
                }}
                resizeMode="cover"
              />
            </View>

            <TouchableOpacity
              onPress={toggleAvatar}
              style={{
                marginTop: 12,
                paddingHorizontal: 16,
                paddingVertical: 8,
                backgroundColor: 'transparent',
                borderRadius: 8,
                borderWidth: 1,
                borderColor: theme.colors.primary
              }}
            >
              <Text style={{ color: theme.colors.primary, fontSize: 14 }}>
                Trocar Foto
              </Text>
            </TouchableOpacity>
          </View>

          <InputContainer theme={theme}>
            <InputLabel theme={theme}>Seu Nome</InputLabel>
            <StyledTextInput
              theme={theme}
              placeholder="Digite seu nome aqui..."
              placeholderTextColor={theme.colors.textSecondary}
              value={nome}
              onChangeText={setNome}
            />
          </InputContainer>

          <SaveButton theme={theme} onPress={handleSave}>
            <SaveButtonText theme={theme}>Salvar Perfil</SaveButtonText>
          </SaveButton>

          {savedName ? (
            <Footer theme={theme}>
              <Text style={{ color: theme.colors.textSecondary, fontSize: 14 }}>
                Último perfil salvo:
              </Text>
              <Text style={{ color: theme.colors.text, fontWeight: 'bold', fontSize: 16 }}>
                {savedName}
              </Text>
            </Footer>
          ) : null}
        </Container>
      </ScrollView>
    </KeyboardAvoidingView>
  );
};

// Import Image component
import { Image } from 'react-native';