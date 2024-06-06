"use client";

import { useEffect, useState } from "react";

import { EditAccountSheet } from "@/app/features/accounts/components/edit-account-sheet";
import { NewAccountSheet } from "@/app/features/accounts/components/new-account-sheet";

import { NewCategorySheet } from "@/app/features/categories/components/new-category-sheet";
import { EditCategorySheet } from "@/app/features/categories/components/edit-category-sheet";

import { NewTransactionSheet } from "@/app/features/transactions/components/new-transaction-sheet";

export const SheetProvider = () => {
  const [isMounted, setIsMounted] = useState(false);

  useEffect(() => {
    setIsMounted(true);
  }, []);

  if (!isMounted) return null;

  return (
    <>
      <NewAccountSheet />
      <EditAccountSheet />

      <NewCategorySheet />
      <EditCategorySheet />
      <NewTransactionSheet />
    </>
  );
};
