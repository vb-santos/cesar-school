"use client";

import { Box, Image, Text, Button, VStack } from "@chakra-ui/react";

type ProductCardProps = {
  title: string;
  price: string;
  imageUrl: string;
};

export function ProductCard({ title, price, imageUrl }: ProductCardProps) {
  return (
    <Box
      borderWidth="1px"
      borderRadius="lg"
      overflow="hidden"
      shadow="md"
      bg="white"
      _dark={{ bg: "gray.800" }}
    >
      <Image src={imageUrl} alt={title} w="full" h="200px" objectFit="cover" />

        <VStack spacing={3} align="stretch" p={4}>
        <Text fontWeight="semibold" fontSize="lg">
          {title}
        </Text>
        <Text color="gray.600" _dark={{ color: "gray.300" }}>
          {price}
        </Text>
        <Button colorScheme="brand">Adicionar ao carrinho</Button>
      </VStack>
    </Box>
  );
}

