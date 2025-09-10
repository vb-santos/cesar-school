"use client";

import { SimpleGrid } from "@chakra-ui/react";
import { ProductCard } from "@/components/ProductCard";

export default function HomePage() {
  return (
    <main className="p-8">
      <SimpleGrid columns={{ base: 1, md: 3 }} spacing={6}>
        <ProductCard
          title="Tênis Esportivo"
          price="R$ 299,90"
          imageUrl="https://picsum.photos/300/200"
        />
        <ProductCard
          title="Fone de Ouvido"
          price="R$ 149,90"
          imageUrl="https://picsum.photos/300/201"
        />
        <ProductCard
          title="Smartwatch"
          price="R$ 499,90"
          imageUrl="https://picsum.photos/300/202"
        />
      </SimpleGrid>
    </main>
  );
}
