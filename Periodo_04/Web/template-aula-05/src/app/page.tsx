"use client";

import { useEffect } from "react";
import { Navbar } from "@/components/Navbar";
import { ProductCard } from "@/components/ProductCard";
import { SimpleGrid } from "@chakra-ui/react";

export default function HomePage() {
  return (
    <>
      <Navbar />
      <main className="p-8">
        <SimpleGrid columns={{ base: 1, md: 3 }} p="6">
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
    </>
  );
}