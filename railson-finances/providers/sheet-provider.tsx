"use client";

import { EditAccountSheet } from "@/app/features/accounts/components/edit-account-sheet";
// import { useMountedState } from "react-use";

import { NewAccountSheet } from "@/app/features/accounts/components/new-account-sheet";
import { useEffect, useState } from "react";

export const SheetProvider = () => {
  //   const isMounted = useMountedState();

  const [isMounted, setIsMounted] = useState(false);

  useEffect(() => {
    setIsMounted(true);
  }, []);

  if (!isMounted) return null;

  return (
    <>
      <NewAccountSheet />
      <EditAccountSheet />
    </>
  );
};
