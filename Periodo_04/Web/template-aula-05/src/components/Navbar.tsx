"use client";

import { Flex, HStack, Text, Link, Button } from "@chakra-ui/react";

export function Navbar() {
  // @ts-ignore
  // @ts-ignore
  return (
    <Flex
      as="nav"
      bg="brand.500"
      color="white"
      px={6}
      py={4}
      justify="space-between"
      align="center"
      shadow="sm"
    >
      <Text fontWeight="bold" fontSize="xl">
        Minha Loja
      </Text>

      <HStack p="6">
        <Link href="#">Início</Link>
        <Link href="#">Produtos</Link>
        <Link href="#">Contato</Link>
      </HStack>

      <Button colorScheme="whiteAlpha" variant="solid">
        Login
      </Button>
    </Flex>
  );
}