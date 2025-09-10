import { createSystem, defineConfig, defaultConfig } from "@chakra-ui/react";

const config = defineConfig({
  theme: {
    tokens: {
      colors: {
        brand: {
          500: { value: "#FF5722" }, // cor da marca da turma
          600: { value: "#E64A19" },
        },
      },
    },
  },
});

export const system = createSystem(defaultConfig, config);